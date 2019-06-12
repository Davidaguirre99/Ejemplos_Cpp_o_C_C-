/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 12/06/2019
 * Time: 9:25
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace CalculadoraDavidC_DEVELOP
{
	partial class MainForm
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.TextBox txtvalor1;
		private System.Windows.Forms.TextBox txtvalor2;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Button btncalcular;
		private System.Windows.Forms.Label lblOperador;
		private System.Windows.Forms.TextBox txtResultado;
		private System.Windows.Forms.ComboBox cmbOperador;
		private System.Windows.Forms.Label label2;
		
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
			this.txtvalor1 = new System.Windows.Forms.TextBox();
			this.txtvalor2 = new System.Windows.Forms.TextBox();
			this.label1 = new System.Windows.Forms.Label();
			this.btncalcular = new System.Windows.Forms.Button();
			this.cmbOperador = new System.Windows.Forms.ComboBox();
			this.txtResultado = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// txtvalor1
			// 
			this.txtvalor1.Location = new System.Drawing.Point(36, 31);
			this.txtvalor1.Name = "txtvalor1";
			this.txtvalor1.Size = new System.Drawing.Size(30, 20);
			this.txtvalor1.TabIndex = 0;
			this.txtvalor1.TextChanged += new System.EventHandler(this.Txtvalor1TextChanged);
			// 
			// txtvalor2
			// 
			this.txtvalor2.Location = new System.Drawing.Point(118, 32);
			this.txtvalor2.Name = "txtvalor2";
			this.txtvalor2.Size = new System.Drawing.Size(30, 20);
			this.txtvalor2.TabIndex = 2;
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(12, 6);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(100, 23);
			this.label1.TabIndex = 3;
			this.label1.Text = "Calculadora 1";
			// 
			// btncalcular
			// 
			this.btncalcular.Location = new System.Drawing.Point(183, 32);
			this.btncalcular.Name = "btncalcular";
			this.btncalcular.Size = new System.Drawing.Size(75, 23);
			this.btncalcular.TabIndex = 4;
			this.btncalcular.Text = "Calcular";
			this.btncalcular.UseVisualStyleBackColor = true;
			this.btncalcular.Click += new System.EventHandler(this.BtncalcularClick);
			// 
			// cmbOperador
			// 
			this.cmbOperador.FormattingEnabled = true;
			this.cmbOperador.Items.AddRange(new object[] {
			"+",
			"-",
			"*",
			"/"});
			this.cmbOperador.Location = new System.Drawing.Point(72, 31);
			this.cmbOperador.Name = "cmbOperador";
			this.cmbOperador.Size = new System.Drawing.Size(40, 21);
			this.cmbOperador.TabIndex = 5;
			// 
			// txtResultado
			// 
			this.txtResultado.Location = new System.Drawing.Point(78, 99);
			this.txtResultado.Name = "txtResultado";
			this.txtResultado.Size = new System.Drawing.Size(30, 20);
			this.txtResultado.TabIndex = 7;
			// 
			// label2
			// 
			this.label2.Location = new System.Drawing.Point(12, 102);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(60, 23);
			this.label2.TabIndex = 8;
			this.label2.Text = "Resultado:";
			this.label2.Click += new System.EventHandler(this.Label2Click);
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(284, 262);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.txtResultado);
			this.Controls.Add(this.cmbOperador);
			this.Controls.Add(this.btncalcular);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.txtvalor2);
			this.Controls.Add(this.txtvalor1);
			this.Name = "MainForm";
			this.Text = "CalculadoraDavidC#DEVELOP";
			this.Load += new System.EventHandler(this.MainFormLoad);
			this.ResumeLayout(false);
			this.PerformLayout();

		}
	}
}
