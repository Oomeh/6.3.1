/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on October 5, 2017, 1:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
//The base class that the trees are based on
class baseTree
{
public:
    virtual void draw()
    {
        
    }
};
//A tree with asterisks! 
class asteriskTree : public baseTree
{
public:
    void draw()
    {
        cout << " /\\" << endl;
        cout << "/**\\" << endl;
    }
};
//A tree with plus signs!
class plusTree : public baseTree
{
public:
    void draw()
    {
        cout << " /\\" << endl;
        cout << "/++\\" << endl;
    }
};
//A tree with at symbols!
class atTree : public baseTree
{
public:
    void draw()
    {
        cout << " /\\" << endl;
        cout << "/@@\\" << endl;
    }
};


int main(int argc, char** argv) {
    
    //Instantiates objects
    asteriskTree AsteriskTree;
    plusTree PlusTree;
    atTree AtTree;
    //Assigns pointer locations
    baseTree * tree1 = &AsteriskTree;
    baseTree * tree2 = &PlusTree;
    baseTree * tree3 = &AtTree;
    //Declares an array of pointers
    baseTree *array[1][3];
    //Adds objects to the array of pointers
    array[0][0] = tree1;
    array[0][1] = tree2;
    array[0][2] = tree3;
    //For loop to call the draw method from each class
    for(int i = 0; i < 3; i++)
    {
        cout << "Drawing " << i+1 << ":" << endl;
        array[0][i]->draw();
    }
    return 0;
}

