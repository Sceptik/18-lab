#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

//По своей сути вектор - динамический массив, но прокаченный
//Из него можно легко удалять элементы, добавлять, менять местами, также способен самостоятельно выделять память
//Вызывается с помощь <vector> и находится в стандартной библиотеке

//Использованные методы: push_back, size, begin, end. (Можно использовать push_up)


    bool compare(float a, float b)
    {
        return(a > b);
    }


int main(){
    setlocale(LC_ALL, "ru");
    
    int size;
    float S;
    
    cout << "Введите размер исходного вектора: "; //Значение должно быть меньше 5 или равно 5 т.к. формула выводит только 5 значений!!
    cin >> size;

    vector<float> FirstVector;

    for(int a = 10, i = 0; a < 20 && i < size; a += 2, i++){
        S = pow(2, a) + tan(a * 2);
        FirstVector.push_back(S);
        cout << FirstVector[i] << endl;
    }
    
    vector<float> NewVector;
    
    for(int i = 0; i < size; i++){
        if(FirstVector[i] < 10000){
            NewVector.push_back(FirstVector[i]);
        }
    }
    
    if (NewVector.empty()) {
        cout << "Новый вектор пустой." << endl;
        return 0;
    }
    
    else{
        cout << "Новый вектор (Числа меньше 10000)" << endl;
        sort(NewVector.begin(), NewVector.end(), compare);
        for(int i=0; i < NewVector.size(); i++){
            cout<<NewVector[i]<<endl;
        }

    }
    
    return 0;
}