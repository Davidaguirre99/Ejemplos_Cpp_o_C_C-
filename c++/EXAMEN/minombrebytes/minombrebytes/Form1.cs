using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace minombrebytes
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnMostrar_Click(object sender, EventArgs e)
        {
            Stream nombre =new FileStream(@txbNombre.Text,);
            byte[] minombre = {68,97,118,105,100,32,65,103,117,105,114,114,101 };
            nombre.Write(minombre,0,minombre.Length);
            
            
           
            
        }
    }
}
