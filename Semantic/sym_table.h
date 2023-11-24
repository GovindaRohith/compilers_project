#ifndef SYM_TABLE_H
#define SYM_TABLE_H

#include<bits/stdc++.h>
using namespace std;
// #include "sym.h"
// loc_Sym_tab
class args {
    public:
        string name;
        pair<short int ,bool> dat_type;
        // short int int/float/double/cdouble 
        //bool is_arr
} ;
class Fn_Symbol{
    public: 
    string fn_name;
    pair<short int,bool> ret_type;
    list <args> arg_list;
};
