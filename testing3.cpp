//_____________________________________________Урок 5. Генераторы случайных чисел


//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//    cout << "1 random number is " << 1 + rand() % 80 << endl;
//    cout << "2 random number is " << 1 + rand() % 80 << endl;
//    cout << "3 random number is " << 1 + rand() % 80 << endl;
//    cout << "4 random number is " << 1 + rand() % 80 << endl;
//    cout << "5 random number is " << 1 + rand() % 80 << endl;
//    cout << "6 random number is " << 1 + rand() % 80 << endl;
//    cout << "7 random number is " << 1 + rand() % 80 << endl;
//    cout << "8 random number is " << 1 + rand() % 80 << endl;
//}




//.............................................................



//    //если мы хотим, чтобы с каждой итерацией появлялись новые числа нужно использовать srand(time(NULL))
//#include <iostream>
//#include <ctime>    // она нужна чтобы работал time(0)
//using namespace std;
//
//int main() 
//{
//    srand(time(0));    // time(0) - возвращает текущее время на комьютере,и оно добавляется в параметр srand(), поэтому появляются новые числа
//
//        cout << "1 random number is " << rand() << endl;
//        cout << "2 random number is " << rand() << endl;
//        cout << "3 random number is " << rand() << endl;
//        cout << "4 random number is " << rand() << endl;
//        cout << "5 random number is " << rand() << endl;
//        cout << "6 random number is " << rand() << endl;
//        cout << "7 random number is " << rand() << endl;
//        cout << "8 random number is " << rand() << endl; 
//}
//    
//

//__________________________________Циклы For, While, do while

////      Задание 1 . Программа, выводящая квадраты чисел от 10 до 20
//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    int number = 10;
//
//    for (number = 10; number < 21; number++) {
//        cout << "Квадрат числа " << number <<" равен " << number * number<<endl;
//        counter++;
//    }
//    return 0;
//}

////     Задание 2 . Программа, суммирующая все четные числа от 5 до 25
//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    int sum = 0;
//    int ost = 0;
//    for (int i = 5; i < 25;++i) {
//        if (ost == i % 2 )
//            sum += i;
//        else
//            continue;
//    }
//    cout << "Сумма равна " << sum << endl;
//}


//    Задание 3 . 

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
 
    system("color 6E");

    //cout << 196 / 100 << endl;
    //cout << 196 % 10 << endl;
    //cout << (196 / 10) % 10 << endl;
    int num, a, b, c;
    cout << "Введи трехзначное число" << endl;
    cin >> num;

    if (num < 99 or num > 999)
        cout << "Error" << endl;
    a = num / 100;
    c = num % 10;
    b = (num / 10) % 10;

    cout << "Сумма равна " << a + b + c << endl;

    return 0;
}



