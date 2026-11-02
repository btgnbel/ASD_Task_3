#include "list.h"
#include "operation.h"
#include "my_data.h"
 

void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    if (findElm(L, x) == nullptr) {
        address P = allocate(x);

        if(L.first == nullptr || x.id < L.first -> info.id) {
            insertFirst(L,P);
        }else{
            address Prec = L.first;
            while (Prec -> next != nullptr && Prec -> next -> info.id < x.id) {
                Prec = Prec -> next;
            }
            insertAfter(L, Prec, P);
        }
    }else{
        cout << "ID sudah ada! Data ditolak." << endl;
    }
    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    if (L.first != nullptr) {
        if (L.first->info.id == id_x) {
            deleteFirst(L, P);
            deallocate(P);
            cout << "Data berhasil dihapus." << endl;
        }else{
            Prec = L.first;
            while (Prec->next != NULL && Prec->next->info.id != id_x) {
                Prec = Prec->next;
            }
            if (Prec->next != NULL) {
                deleteAfter(L, Prec, P);
                deallocate(P);
                cout << "Data berhasil dihapus." << endl;
            } else {
                cout << "Data dengan ID tersebut tidak ditemukan!" << endl;
            }
         }
    } else {
        cout << "List kosong!" << endl;
    }
    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
    address Prec = nullptr;
    P = L.first;
    
    while (P != nullptr) {
        if (P->info.score > 80) {
            if (P == L.first) {
                deleteFirst(L, P);
                insertLast(L2, P);
                P = L.first;
            }else{
                deleteAfter(L, Prec, P);
                insertLast(L2, P);
                P = Prec->next;
            }
        }else{
            Prec = P;
            P = P -> next;
        }
    }
    //----------------------------------------
}
