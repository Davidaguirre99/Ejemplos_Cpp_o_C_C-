/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:20
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace IntroductionFiles
{
	partial class MainForm
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.DataGridView dgvLogs;
		private System.Windows.Forms.DataGridViewTextBoxColumn tipo;
		private System.Windows.Forms.DataGridViewTextBoxColumn log;
		private System.Windows.Forms.Button btnanadirlog;
		private System.Windows.Forms.Button btnLeerDirectorio;
		private System.Windows.Forms.TextBox txtLeerDirectorio;
		private System.Windows.Forms.TextBox txbLeerDirectorio;
		private System.Windows.Forms.Button btnListarDirectorio;
		private System.Windows.Forms.Button btnCrearArchivo;
		private System.Windows.Forms.TextBox txtCrearArchivo;
		private System.Windows.Forms.Button btnCrearDirectorio;
		private System.Windows.Forms.TextBox txbCrearDirectorio;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		/// </summary>
		private void InitializeComponent()
		{
			this.dgvLogs = new System.Windows.Forms.DataGridView();
			this.tipo = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.log = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.btnanadirlog = new System.Windows.Forms.Button();
			this.btnLeerDirectorio = new System.Windows.Forms.Button();
			this.txtLeerDirectorio = new System.Windows.Forms.TextBox();
			this.txbLeerDirectorio = new System.Windows.Forms.TextBox();
			this.btnListarDirectorio = new System.Windows.Forms.Button();
			this.btnCrearArchivo = new System.Windows.Forms.Button();
			this.txtCrearArchivo = new System.Windows.Forms.TextBox();
			this.btnCrearDirectorio = new System.Windows.Forms.Button();
			this.txbCrearDirectorio = new System.Windows.Forms.TextBox();
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).BeginInit();
			this.SuspendLayout();
			// 
			// dgvLogs
			// 
			this.dgvLogs.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dgvLogs.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
			this.tipo,
			this.log});
			this.dgvLogs.Location = new System.Drawing.Point(23, 67);
			this.dgvLogs.Name = "dgvLogs";
			this.dgvLogs.Size = new System.Drawing.Size(943, 203);
			this.dgvLogs.TabIndex = 0;
			this.dgvLogs.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.DgvLogsCellContentClick);
			this.dgvLogs.CellDoubleClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.DataGridView1CellContentClick);
			// 
			// tipo
			// 
			this.tipo.HeaderText = "Tipo Logo";
			this.tipo.Name = "tipo";
			this.tipo.ReadOnly = true;
			// 
			// log
			// 
			this.log.HeaderText = "Descripcion";
			this.log.Name = "log";
			this.log.ReadOnly = true;
			// 
			// btnanadirlog
			// 
			this.btnanadirlog.Location = new System.Drawing.Point(55, 306);
			this.btnanadirlog.Name = "btnanadirlog";
			this.btnanadirlog.Size = new System.Drawing.Size(254, 23);
			this.btnanadirlog.TabIndex = 1;
			this.btnanadirlog.Text = "Anadir Log";
			this.btnanadirlog.UseVisualStyleBackColor = true;
			this.btnanadirlog.Click += new System.EventHandler(this.BtnanadirlogClick);
			// 
			// btnLeerDirectorio
			// 
			this.btnLeerDirectorio.Location = new System.Drawing.Point(87, 38);
			this.btnLeerDirectorio.Name = "btnLeerDirectorio";
			this.btnLeerDirectorio.Size = new System.Drawing.Size(133, 23);
			this.btnLeerDirectorio.TabIndex = 2;
			this.btnLeerDirectorio.Text = "Leer Directorio";
			this.btnLeerDirectorio.UseVisualStyleBackColor = true;
			this.btnLeerDirectorio.Click += new System.EventHandler(this.BtnLeerDirectorioClick);
			// 
			// txtLeerDirectorio
			// 
			this.txtLeerDirectorio.Location = new System.Drawing.Point(38, 12);
			this.txtLeerDirectorio.Name = "txtLeerDirectorio";
			this.txtLeerDirectorio.Size = new System.Drawing.Size(288, 20);
			this.txtLeerDirectorio.TabIndex = 3;
			// 
			// txbLeerDirectorio
			// 
			this.txbLeerDirectorio.Location = new System.Drawing.Point(364, 12);
			this.txbLeerDirectorio.Name = "txbLeerDirectorio";
			this.txbLeerDirectorio.Size = new System.Drawing.Size(311, 20);
			this.txbLeerDirectorio.TabIndex = 4;
			// 
			// btnListarDirectorio
			// 
			this.btnListarDirectorio.Location = new System.Drawing.Point(440, 38);
			this.btnListarDirectorio.Name = "btnListarDirectorio";
			this.btnListarDirectorio.Size = new System.Drawing.Size(75, 23);
			this.btnListarDirectorio.TabIndex = 5;
			this.btnListarDirectorio.Text = "Listar Directorio";
			this.btnListarDirectorio.UseVisualStyleBackColor = true;
			this.btnListarDirectorio.Click += new System.EventHandler(this.BtnListarDirectorioClick);
			// 
			// btnCrearArchivo
			// 
			this.btnCrearArchivo.Location = new System.Drawing.Point(770, 37);
			this.btnCrearArchivo.Name = "btnCrearArchivo";
			this.btnCrearArchivo.Size = new System.Drawing.Size(129, 23);
			this.btnCrearArchivo.TabIndex = 6;
			this.btnCrearArchivo.Text = "Crear Archivo";
			this.btnCrearArchivo.UseVisualStyleBackColor = true;
			this.btnCrearArchivo.Click += new System.EventHandler(this.BtnCrearArchivoClick);
			// 
			// txtCrearArchivo
			// 
			this.txtCrearArchivo.Location = new System.Drawing.Point(743, 11);
			this.txtCrearArchivo.Name = "txtCrearArchivo";
			this.txtCrearArchivo.Size = new System.Drawing.Size(211, 20);
			this.txtCrearArchivo.TabIndex = 7;
			// 
			// btnCrearDirectorio
			// 
			this.btnCrearDirectorio.Location = new System.Drawing.Point(636, 335);
			this.btnCrearDirectorio.Name = "btnCrearDirectorio";
			this.btnCrearDirectorio.Size = new System.Drawing.Size(164, 23);
			this.btnCrearDirectorio.TabIndex = 8;
			this.btnCrearDirectorio.Text = "Crear Directorio";
			this.btnCrearDirectorio.UseVisualStyleBackColor = true;
			this.btnCrearDirectorio.Click += new System.EventHandler(this.BtnCrearDirectorioClick);
			// 
			// txbCrearDirectorio
			// 
			this.txbCrearDirectorio.Location = new System.Drawing.Point(627, 309);
			this.txbCrearDirectorio.Name = "txbCrearDirectorio";
			this.txbCrearDirectorio.Size = new System.Drawing.Size(198, 20);
			this.txbCrearDirectorio.TabIndex = 9;
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = System.Drawing.SystemColors.Highlight;
			this.ClientSize = new System.Drawing.Size(1010, 451);
			this.Controls.Add(this.txbCrearDirectorio);
			this.Controls.Add(this.btnCrearDirectorio);
			this.Controls.Add(this.txtCrearArchivo);
			this.Controls.Add(this.btnCrearArchivo);
			this.Controls.Add(this.btnListarDirectorio);
			this.Controls.Add(this.txbLeerDirectorio);
			this.Controls.Add(this.txtLeerDirectorio);
			this.Controls.Add(this.btnLeerDirectorio);
			this.Controls.Add(this.btnanadirlog);
			this.Controls.Add(this.dgvLogs);
			this.Name = "MainForm";
			this.Text = "IntroductionFiles";
			this.Load += new System.EventHandler(this.MainFormLoad);
			this.Click += new System.EventHandler(this.BtnanadirlogClick);
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		}
	}

