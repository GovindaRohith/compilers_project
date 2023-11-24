
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
args *search_id_loc_sym_tab(string name, int scope_no) // searches the name in the local symbol table in each and every scope.
{
    cout << "search_id_loc_sym_tab--" << name << scope_no << endl;
    args *temp = new args;
    //  print_loc_sym_tab();

    while (scope_no > 0)
    {
        // cout<<"scope_no="<<scope_no<<endl;
        // cout<<"*************"<<endl;
        if (loc_sym_tab[scope_no - 1].find(name) != loc_sym_tab[scope_no - 1].end())
        {
            //     cout<<"*************"<<endl;
            temp->name = loc_sym_tab[scope_no - 1][name].name;
            temp->dat_type.first = loc_sym_tab[scope_no - 1][name].data_type;
            temp->dat_type.second = loc_sym_tab[scope_no - 1][name].type;
            return temp;
        }

        scope_no--;
    }
    // cout<<"Hello world"<<endl;
    return NULL;
}
bool comp_assign_checker(short int first, short int second, bool third, bool fourth) 
{
    cout << first << "-" << second << "-" << third << "-" << fourth << endl;
    if (third != fourth)
    {
        // cout<<"qwertyuiop"<<endl;
        return false;
    }
    if (first == 1 || first == 3 || first == 5)
    {
        if (second == 1 || second == 3 || second == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
FILE *convert_str(char *strc)
{
    string str1(strc);

    if (str1.size() >= 6)
    {
        str1.resize(str1.size() - 6);
    }

    str1 += "_token.txt";

    const char *cstr = str1.c_str();
    cout << cstr << endl;
    FILE *fp = fopen(cstr, "w");
    return fp;
}
