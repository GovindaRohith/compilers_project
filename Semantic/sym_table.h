
#include "sym_table.h"
#include <bits/stdc++.h>
using namespace std;
vector<unordered_map<string, loc_Sym_tab>> loc_sym_tab;
unordered_map<string, Fn_Symbol> fn_sym_tab;
void create_loc_sym_tab_map() // creates local symbol table
{
    cout << "create_loc_sym_tab_map" << endl;
    unordered_map<string, loc_Sym_tab> temp;
    loc_sym_tab.push_back(temp);
    // cout<<"vectorsize-"<<loc_sym_tab.size()<<endl;
}
void delete_loc_sym_tab_map() // deletes local symbol table
{
    cout << "delete_loc_sym_tab_map" << endl;
    loc_sym_tab.pop_back();
}
void print_loc_sym_tab() // for debugging
{
    int a = 0;
    cout << "print_loc_sym_tab" << endl;
    cout << "Name\tData Type\tType\tPar Var\tScope\tValue\n";
    for (auto i : loc_sym_tab)
    {
        cout << a << endl;
        cout << "loc_sym_tab" << endl;
        for (auto j : i)
        {
            cout << "name-" << j.first << "|-|" << j.second.name << "\t" << j.second.data_type << "\t" << j.second.type << "\t" << j.second.par_var << "\t" << j.second.scope << "\t" << endl;
        }
        a++;
    }
}
void insert_loc_sym_tab(string name, short int data_type, bool type, bool par_var, int scope, float float_val, string str_val) // inserting entry into the local symbol table for the respective scope
{
    cout << "insert_loc_sym_tab" << endl;
    // cout<<name<<"-"<<data_type<<"-"<<type<<"-"<<par_var<<"-"<<scope<<endl;
    // cout<<loc_sym_tab.size()<<endl;
    loc_Sym_tab temp;

    temp.name = name;
    temp.data_type = data_type;
    temp.type = type;       // type = 1 for array
    temp.par_var = par_var; // var = 1 for parameters
    temp.scope = scope;
    temp.val.float_val = float_val;
    temp.val.str_val = str_val;
    cout << "vector size=" << loc_sym_tab.size() << endl;
    loc_sym_tab[loc_sym_tab.size() - 1][name] = temp;

    cout << name << "-" << data_type << "-" << type << "-" << par_var << "-" << scope << endl;
}
