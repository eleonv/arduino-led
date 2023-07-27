namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        System.IO.Ports.SerialPort arduino;

        public Form1()
        {
            InitializeComponent();
            arduino = new System.IO.Ports.SerialPort();
            arduino.PortName = "COM3";
            arduino.BaudRate = 9600;
            arduino.Open();
        }

        private void buttonEncender_Click(object sender, EventArgs e)
        {
            arduino.Write("E");
        }

        private void buttonApagar_Click(object sender, EventArgs e)
        {
            arduino.Write("A");
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (arduino.IsOpen)
            {
                arduino.Close();
            }
        }
    }
}