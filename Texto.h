#ifndef TEXTO_H
#define TEXTO_H

#ifndef STRING_H
    #define STRING_H
    #include <string>
#endif

#ifndef CSTRING_H
    #define CSTRING_H
    #include <cstring>
#endif

#ifndef LIST_H
    #define LIST_H
    #include <list>
#endif

#ifndef MAP_H
    #define MAP_H
    #include <map>
#endif

#ifndef IOSTREAM_H
    #define IOSTREAM_H
    #include <iostream>
#endif

#ifndef FSTREAM_H
    #define FSTREAM_H
    #include <fstream>
#endif

#ifndef BITSET_H
    #define BITSET_H
    #include <bitset>
#endif

#ifndef IOMANIP_H
    #define IOMANIP_H
    #include <iomanip>
#endif

#ifndef CSTDIO_H
    #define CSTDIO_H
    #include <cstdio>
#endif

using namespace std;

class Texto
{
public:
    string text;                                // Es el texto con el cual se estara trabajando

    size_t countWord(string word);              // Cuenta un patron de caracteres (palabra y subpalabara) en el texto
    size_t countCharacter(char character);      // cuenta cuantas veces se repite un caracter en el texto
    map<string, size_t> countAllWords();        // cuenta todas las palabras del texto separadas por espacios en blanco
    map<char, size_t> countAllLetters();        // cuenta todas las letras en el texto
    map<long, size_t> countAllNumericStrings(); // cuanta todas las palabras que representan a un numero entero
    list<string> split(char character);         // Divide el texto por el token dado como parametro

    void detectEnconding();
    bool isBigEndian(void);

    bool isEmail( const string email );
    bool isCellPhone( const string cell );
    bool isCURP( const string CURP );
    bool isRFC( const string RFC );
};

#endif // TEXTO_H
