﻿/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:20
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.IO;
using System.Text;
enum ColumnaLog {Tipo, Log};
namespace IntroductionFiles
{
	/// <summary>
	/// Description of MainForm.
	/// </summary>
	public partial class MainForm : Form
	{
		public MainForm()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		void DataGridView1CellContentClick(object sender, DataGridViewCellEventArgs e)
		{

			DataGridViewTextBoxCell celdaTipo =
			(DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[0];
		    DataGridViewTextBoxCell celdaLog=
			(DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[1];
			
		    if(celdaTipo.Value != null)
			{
			 string tipo =	 celdaTipo.Value.ToString();
			 string log  =	 celdaLog.Value.ToString(); 
			 MessageBoxIcon icono;
			 if(tipo=="error")
			 {
			 	icono= MessageBoxIcon.Error;
			 }
			 else
			 {
			 	icono = MessageBoxIcon.Information;
			 }
			 
			 MessageBoxButtons botones= MessageBoxButtons.OK;
			 MessageBox.Show(log,tipo,botones,icono);
			}
			
       	}
		void BtnanadirlogClick(object sender, EventArgs e)
		{
			string log = "Prueba de Log ";
			string tipo = " info ";
			
			int posicionNuevoLog = dgvLogs.Rows.Add();
			
			
			dgvLogs.Rows[posicionNuevoLog].Cells[0].Value = tipo;
			dgvLogs.Rows[posicionNuevoLog].Cells[1].Value = log;
			// 1)Definir cadena de texto
			// 2) llamar data grid view
			// 3) Anadir fila
			// 4) 
		}
		void MainFormLoad(object sender, EventArgs e)
		{
	
		}
		void BtnLeerDirectorioClick(object sender, EventArgs e)
		{
			try
			{//ok
				string path = txtLeerDirectorio.Text;
				//Directory
				DirectoryInfo infoDirectorio = new DirectoryInfo(@path);
				string fechaCreacion = infoDirectorio.CreationTime.ToString();
				string nombreCompleto = infoDirectorio.FullName;
				string directorioPadre = infoDirectorio.Parent.ToString();
				string directorioRaiz = infoDirectorio.Root.ToString();
				
				EscribirLog ("info","Leyendo diractorio"+ fechaCreacion, dgvLogs);
                EscribirLog ("info", "Leyendo diractorio" + nombreCompleto, dgvLogs);
 				EscribirLog ("info", "Leyendo diractorio" + directorioRaiz, dgvLogs);                
			    EscribirLog ("info", "Leyendo diractorio" + directorioPadre, dgvLogs);
			    FileInfo[] archivosdelDirectorio = infoDirectorio.GetFiles();
			    foreach(FileInfo archivo in archivosdelDirectorio)
			    {
			    	EscribirLog("info","Archivo: "+archivo.CreationTime,dgvLogs);
			    	EscribirLog("info","Archivo: "+archivo.FullName,dgvLogs);
			    	EscribirLog("info","Archivo: "+archivo.Extension,dgvLogs);
			    	EscribirLog("info","Archivo: "+archivo.LastAccessTime,dgvLogs);
			    	EscribirLog("info","Archivo: "+archivo.IsReadOnly,dgvLogs);
			    }
			}
			catch(Exception error)//ERROR
			{
				EscribirLog ("error", error.ToString(), dgvLogs);
			}
		}
		void EscribirLog (string tipo, string log, DataGridView dgv){
		  int posicionNuevoLog = dgvLogs.Rows.Add();
						
		  dgvLogs.Rows[posicionNuevoLog].Cells[0].Value = tipo;
	 	  dgvLogs.Rows[posicionNuevoLog].Cells[1].Value = log;
	 	  
	 	  if(tipo == "error")
	 	  {
	 	  	dgv.Rows[posicionNuevoLog].Cells[0].Style.BackColor = Color.Red;
	 	  }
	 	  else
	 	  {
	 	  	dgv.Rows[posicionNuevoLog].Cells[0].Style.BackColor=Color.BlueViolet;
	 	  }
		  }
		void DgvLogsCellContentClick(object sender, DataGridViewCellEventArgs e)
		{

		}
		void BtnListarDirectorioClick(object sender, EventArgs e)
		{
			try
			{
				string path= txbLeerDirectorio.Text;
				string[] arregloDirectorios = Directory.GetDirectories(@path);
				int numeroDirectorios = arregloDirectorios.Length;
				EscribirLog("info","Numero Directorios: " + numeroDirectorios.ToString(),dgvLogs);
				foreach(string directorio in arregloDirectorios)
				{
					EscribirLog("info", "Directorio: "+ directorio,dgvLogs);
				}
			    }
		    
		catch (Exception error)
			{
	         EscribirLog("error",error.ToString(),dgvLogs);
			}
		}
		void BtnCrearArchivoClick(object sender, EventArgs e)
		{
			try
			{
				string path= txtCrearArchivo.Text;				
				
				
				StreamWriter escritura = File.CreateText(@path);
				escritura.WriteLine("Hola Archivo");
				escritura.WriteLine("Segunda Linea");
				escritura.WriteLine("Tecera Linea");
				
				//Cerrar el archivo despues de usarlo
				escritura.Close();
				//StreamWriter escritura = File.(@path);
				
				using(StreamWriter escrituraDos = File.CreateText(@path))
				{
				escrituraDos.WriteLine("Hola Archivo");
				escrituraDos.WriteLine("Segunda Linea");
				escrituraDos.WriteLine("Tecera Linea");					
				}
					
				EscribirLog("info","Escritura Archivo : se estudio el archivo",dgvLogs);
			}
			catch(Exception error)
			{
				EscribirLog("error",error.ToString(),dgvLogs);
			}
		}
		void BtnCrearDirectorioClick(object sender, EventArgs e)
		{
			try
			{
				string path= txbCrearDirectorio.Text;
				Directory.CreateDirectory(@path);
				EscribirLog("info", "Crear Directorio: Se  creo el directorio" + path, dgvLogs);
			}
			catch(Exception error)
			{
				EscribirLog("error", error.ToString(),dgvLogs);
			}
		}
		void BtnCopiarDirectorioClick(object sender, EventArgs e)
		{
			try{
				string origenDirectorio = txbDirOrigen.Text;
				string destinoDirectorio = txbDirDestino.Text;
				bool validaciondirectorio = Directory.Exists(@origenDirectorio);
				if(validaciondirectorio == true)
				{
					string[] directoriosOrigen= Directory.GetDirectories(@origenDirectorio);
					//aRCHIVOS
					string[] archivosEncontrados = Directory.GetFiles(@origenDirectorio);
					//FileCopy
					foreach(string directorio in directoriosOrigen)
					{
						EscribirLog("info", directorio, dgvLogs );
						int inicioSubString= origenDirectorio.Length;
						int finSubString = directorio.Length;
						string  nombreDirectorio = directorio.Substring(inicioSubString,finSubString);
						EscribirLog("info", nombreDirectorio,dgvLogs);
					}
							
				}
			
				else
				{
					EscribirLog("error", "No valido Directorio",dgvLogs);
				}
				
				}
				catch(Exception error)
				{
					EscribirLog("error",error.ToString(),dgvLogs);
				}
		}
		void BtnStreamWClick(object sender, EventArgs e)
		{
			String path = txbStreamW.Text;
			Stream writingStream = new FileStream(@path,FileMode.Create);
			try
			{
			  
			 if(writingStream.CanWrite)
			 {
			 	byte[] miNombreEnBytes = new byte[] {
			 	    68,65,86,73,68,32,65,71,85,73,82,82,69
			 	};
			 	writingStream.Write(miNombreEnBytes, 0, miNombreEnBytes.Length);
			 	writingStream.WriteByte(33);
			    EscribirLog("info","Escribimos Archivo", dgvLogs);
			 }else
			 {
			 	EscribirLog("error","No puede escribir en el archivo", dgvLogs);
			 
			 }
			 writingStream.Close();
				
			}
			catch(Exception error)
			{
				EscribirLog("error",error.ToString(), dgvLogs);
			}
			finally{
				writingStream.Close();
			}
		}
		void BtnStreamRClick(object sender, EventArgs e)
		{
			string path = txbStreamW.Text;
			try
			{
				using(Stream readingStream = new FileStream(@path,FileMode.Open))
				{
				 byte[] arregloTemporal = new byte[3];
				 UTF8Encoding codification = new UTF8Encoding(true);//dEFINIR CODIFICACION DEL TEXTO EN NUESTRO BUFFER
				 //readingStream.Seek -> Moverse de Posiciones
				 int posicion;
				 while( (posicion= readingStream.Read(arregloTemporal, 0 ,arregloTemporal.Length)) > 0)
				 {
				 	string caracter = codification.GetString(arregloTemporal,0,arregloTemporal.Length);
	                EscribirLog("Info",  "Caracter: "+ caracter, dgvLogs);			 
				 }
			}
			
			}catch(Exception error)
			{
				EscribirLog("error",error.ToString(), dgvLogs);
			}
			
		}
						
		}
	}



	
	
		



