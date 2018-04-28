#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include<iostream>
#include<cstddef>
#include<string>
#include"mainmen.h"
#include"menu.h"
#include"Relation.h"

string convertchar(string x);
void tambah_transportasi(Listt &L);
void tambah_kota(Listk &L);
void tambah_relasi(Listr &Lr, Listk &lk, Listt &lt);
void hapus_transportasi(Listt &lt, Listr &lr, Listk &lk);
void hapus_kota(Listk &lk, Listr &lr);
void print_transkota(Listr Lr, Listk Lk, Listt Lt);
void print_transpilihan(Listr lr, Listk lk, Listt lt);
void mudah_sulit(Listr lr, Listk lk, Listt lt);
void print_kota(Listr lr, Listk lk, Listt lt);
void printallkota(Listk lk);
void printalltransport(Listt lt);

#endif // MENU_H_INCLUDED
