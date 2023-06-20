class TrapeciosIntegracion {
    private:
        double a; // Limite inferior de integracion
        double b; // Limite superior de integracion
        int n; // Numero de trapecios

    public:
        TrapeciosIntegracion(double a, double b, int n);
        ~TrapeciosIntegracion();

        double calcularFuncion() {
            //MuParser evaluate = new Muparser();  //Objeto para evaluar la función del usuario

            std::string fx; // Expresión matemática a evaluar
            double x; // Valor de la variable 'x' en la expresión

            // Solicitar la expresión al usuario
            std::cout << "Ingrese la expresion matematica (utilice 'x' como variable): ";
            std::getline(std::cin, fx);

            // Evaluar la expresión utilizando el evaluador
            double result = evaluate.evaluateExpression(fx, x);

            // Imprimir el resultado
            std::cout << "El resultado de la evaluacion es: " << result << std::endl;

            return result;
        }

        double calcularIntegral() {
            double h = (b - a) / n; // Ancho del trapecio
            double suma = 0.0;
            double x;

            // Sumar los valores de la funcion en los puntos intermedios
            for (int i = 1; i < n; i++) {
                x = a + i * h;
                suma += funcion(x);
            }

            // Calcular la integral utilizando la formula del trapecio
            double integral = (h / 2) * ((funcion(a) + funcion(b)) + (2 * suma));

            return integral;
        }
};

TrapeciosIntegracion::TrapeciosIntegracion(double a, double b, int n) {
}

TrapeciosIntegracion::~TrapeciosIntegracion() {
}
