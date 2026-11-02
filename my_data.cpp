 
#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"ID    : ";
    cin>>d.ID;
    cout<<"Name  : ";
    cin>>d.name;
    cout<<"Rank  : ";
    cin>>d.rank;
    cout<<"Score : ";
    cin>>d.score;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID: "<<d.ID
        <<" | Name: "<<d.name
        <<" | Rank: "<<d.rank
        <<" | Score: "<<d.score<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Editing data with ID "<<d.ID<<" (ID cannot be changed)"<<endl;
    cout<<"New name  : ";
    cin>>d.name;
    cout<<"New rank  : ";
    cin>>d.rank;
    cout<<"New score : ";
    cin>>d.score;




    // ===========================
}

