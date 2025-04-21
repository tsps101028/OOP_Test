# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<bits/stdc++.h>

double Cylinder :: SurfaceArea(){
    double sa(0);
    sa=2*M_PI*radius*radius+2*M_PI*radius*height;
    int k=1;
    return sa;
}

double Cylinder :: Volume(){
    double d(0);
    d=M_PI*radius*radius*height;
    return d;
}

double Cylinder :: Circumference(){
    double cf(0);
    cf=2*M_PI*radius;
    return cf;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<std::setprecision(3);
    out<<"Circumference: "<<cldr.Circumference() <<std::endl;
    out<<"SurfaceArea: "<<cldr.SurfaceArea() <<std::endl;
    out<<"Volume: "<<cldr.Volume() <<std::endl;
    return out;
}

# endif
