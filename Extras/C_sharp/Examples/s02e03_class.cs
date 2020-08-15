using System;

namespace LineApplication {
    class Line {
        private double length;   // Length of a line

        //Constructor no arguments
        public Line() {
            Console.WriteLine("Object is being created");
        }

        //Parameterized constructor
        public Line(double len) {
            Console.WriteLine("Object is being created, length = {0}", len);
            length = len;
        }

        //destructor
        ~Line() {
            Console.WriteLine("Object is being deleted");
        }

        public void setLength( double len ) {
            length = len;
        }

        public double getLength() {
            return length;
        }

        static void Main(string[] args) {
            Line line = new Line();

            // set line length
            line.setLength(6.0);
            Console.WriteLine("Length of line : {0}", line.getLength());
            Console.ReadKey();
        }
    }
}