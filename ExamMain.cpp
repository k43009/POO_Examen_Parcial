#include <iostream>
#include "SentinelLinkedList.h"
#include "LQueue.h"
#include "LStack.h"
#include "Figuras.h"
using namespace std;

int main() {
    // Lista: PushFront/PopFront
    SentinelLinkedList<int> lst;
    lst.PushFront(3); lst.PushFront(2); lst.PushFront(1);
    cout << "Front lst: " << lst.Front() << "\n";       // 1
    cout << "PopFront: " << lst.PopFront() << "\n";     // 1

    // Cola
    LQueue<string> q;
    q.Enqueue("A"); q.Enqueue("B"); q.Enqueue("C");
    cout << "Front q: " << q.Front() << "\n";           // A
    cout << "Dequeue: " << q.Dequeue() << "\n";         // A
    cout << "Count q: " << q.GetCount() << "\n";        // 2

    // Pila
    LStack<double> st;
    st.Push(1.5); st.Push(2.5); st.Push(3.5);
    cout << "Peek st: " << st.Peek() << "\n";           // 3.5
    cout << "Pop st: " << st.Pop() << "\n";             // 3.5
    cout << "Count st: " << st.Count() << "\n";         // 2

    // Figuras
    Circulo c(2.0f);  cout << c.ObtenerNombreDeFigura() << " A=" << c.CalcularArea() << "\n";
    Cuadrado sq(3.0f); cout << sq.ObtenerNombreDeFigura() << " A=" << sq.CalcularArea() << "\n";
    FiguraNLados hex(6, 2.0f); cout << hex.ObtenerNombreDeFigura() << " A=" << hex.CalcularArea() << "\n";
    Cubo cb(2.0f); cout << cb.ObtenerNombreDeFigura() << " Surface=" << cb.Surface() << " Vol=" << cb.Volumen() << "\n";

    float segs[] = {1.0f, 2.5f, 3.0f};
    Figura* myLine = new Linea(segs, 3);
    cout << myLine->ObtenerNombreDeFigura() << " P=" << myLine->CalcularPerimetro() << "\n";
    delete myLine;

    return 0;
}
