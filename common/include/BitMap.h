#pragma once

#include <BitMapContent3D.h>


namespace siu {
    namespace common {


/**
* ���������� ������� �����.
*/
template< size_t Grid >
class BitMap :
    public typelib::BitMapContent3D< Grid, Grid, Grid >
{
public:
    inline BitMap() {
        /* - ������: typelib::BitMapContent3D ����� �������� ������.
        set( false );
        */
    }


    virtual inline ~BitMap() {
    }

};


    } // common

} // siu
