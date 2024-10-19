class Wektor2D
{
    private:
    double x, y;

public:
    // Konstruktor domyślny
    Wektor2D() {
        x = 0.0;
        y = 0.0;
    }

    // Konstruktor z parametrami
    Wektor2D(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Setter dla współrzędnej X
    void setX(double xVal) {
        x = xVal;
    }

    // Setter dla współrzędnej Y
    void setY(double yVal) {
        y = yVal;
    }

    // Getter dla współrzędnej X
    double getX() const {
        return x;
    }

    // Getter dla współrzędnej Y
    double getY() const {
        return y;
    }

    // Operator dodawania wektorów
    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    // Operator iloczynu skalarnego
    double operator*(const Wektor2D& other) const {
        return (x * other.x) + (y * other.y);
    }
};
