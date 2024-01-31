#ifndef COMPRESSOR_H
    #define COMPRESSOR_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
      typedef struct Vector {
      int i;
      int j;
      int capacity;
      char* matrix;
   }Vector;
   typedef struct Ascii{
       char symb;
       int freq;
       char code[128];
   }Ascii;
   struct Hoffmantreenode {
       size_t node_freq;
       Ascii* left_leaf;
       Ascii* right_leaf;
       struct Hoffmantreenode* left;
       struct Hoffmantreenode* right;
       struct Hoffmantreenode* next;
   
   };
   void cal_freq(Ascii obj[], char* buffer);
   void init_struct(Ascii obj[]);
   int imp_symb(Ascii obj[]);
   void delete_zero_freq(Ascii obj[], int count);
   void swap (Ascii obj[], int i, int j);
   int partition(Ascii obj[], int low, int high);
   void sort(Ascii obj[], int low, int high);
   void bubble_symb(Ascii obj[], size_t size);
   struct Hoffmantreenode* linked_list(Ascii obj[], size_t size);
   struct Hoffmantreenode* insert(struct Hoffmantreenode* right, struct Hoffmantreenode* left);
   struct Hoffmantreenode* create_tree(Ascii obj[], size_t size);
   void generate_code(struct Hoffmantreenode* root, char symb, char code[], int index);
   void generate_code_tree(struct Hoffmantreenode* root, Ascii obj[], size_t count);
   void zero(Ascii obj[], size_t count);
   char* binar_search(Ascii obj[], int start, int end, char target);
   void resize_vec(Vector* vec);
   void compr_codes(Vector* vec, char* buffer, Ascii obj[], size_t count, int file_size);
   #endif
