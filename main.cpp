#include <iostream>
#include "Consumen.h"
#include "Goods.h"
#include <iostream>
#include <cstdlib>
#include "consumen.h"
#include "goods.h"
#include "relation.h"

using namespace std;

int main()
{
    //ade
    address_D addrGoods;
    address_s addrConsumen;
    address_R addrRelation;
    Goods goods;
    Consumen consumen;
    Relation relation;

    RelationList relationList;
    DoubleCircular goodsList;
    SingleList consumenList;

    int y;
    int x;
    int menu;
    //ade

    //prabu
    goods.Id = 1;
    goods.expire = 20;
    goods.name = "Oreo";
    goods.price = 4000;
    addrGoods = allocate_D(goods);
    insertFirst(goodsList, addrGoods);

    consumen.Id = 1;
    consumen.name = "Aya";
    consumen.phoneNum = "6281255776513";
    consumen.address = "Jalanan Manja";
    addrConsumen = allocate_s(consumen);
    insertFirst(consumenList, addrConsumen);

    consumen.Id = 2;
    consumen.name = "Pcb";
    consumen.phoneNum = "6281223776869";
    consumen.address = "Jalanin Aja";
    addrConsumen = allocate_s(consumen);
    insertAfter(consumenList, addrConsumen);
    //prabu

    //prabu
    while(true){
        cout<<endl;
        cout<<"==---------- :::::::::::::::::::::::::::: ---------="<<endl;
        cout<<"===----------- .:: TUBES STD(2018) ::. ------------="<<endl;
        cout<<"==---------- :::::::::::::::::::::::::::: ---------="<<endl;
        cout<<"+                                             +"<<endl;
        cout<<"+        Prabu Chaidir B.  - 1301153629       +"<<endl;
        cout<<"+        Ade Satrio W.     - 1301153615       +"<<endl;
        cout<<"+                                             +"<<endl;
        cout<<" ==-------------- .: IF-40-INT :. --------------=="<<endl;
        cout<<" =--------------- .:   Retail  :.  ---------------="<<endl;
        cout<<" "<<endl;
        cout<<"     1.  Products"<<endl;
        cout<<"     2.  View Cart"<<endl;
        cout<<"     3.  Proceed to Payment"<<endl;
        cout<<"     4.  Show Consumer List"<<endl;
        cout<<" "<<endl;
        cout<<"     0.  Exit Program"<<endl;
        cout<<" "<<endl;
        cout<<" ---------------------------------------------"<<endl;
        cout<<" "<<endl;
    //prabu


    //prabu
        cout<<endl;
        cout<<"  Choose with NUMBER: ";
        cin>>menu;
        if(cin.fail()){
            cin.clear();
            cout<<"Please input with NUMBER!, press 'enter' to continue...";
            cin>>x;
        }else{
            switch(menu){
                case 0:
                    return 0;
                break;
                case 1:
                    cout<<endl;
                    cout<<"  --------------- .:: Products ::. ---------------"<<endl;
                    printInfo(goodsList);
                    cout<<"add to cart (choose with NUMBER)";
                    cin>>y;
                    addrGoods = goodsList.first;
                    for (int i = 0; i <= y; i++) {
                        addrGoods = addrGoods->next;
                    }
                    if (addrGoods != NULL) {
                        relation.Buyer = consumenList.first;
                        relation.Goods = addrGoods;
                        addrRelation = allocate_R(relation);
                        if (relationList == NULL) {
                            insertFirst(relationlist, addrRelation);
                        } else {
                            insertLast(relationlist, addrRelation);
                        }
                    }
                break;
                case 2:
                    cout<<endl;
                    cout<<" --------------- .:: CART ::. -------------------"<<endl;
                    printInfo_R(relationList);


                break;
                case 3:

                break;
                case 4:
                    cout<<endl;
                    cout<<"  --------------- .:: Consumer ::. ---------------"<<endl;
                break;
            }
        }
    //prabu
    }

}
