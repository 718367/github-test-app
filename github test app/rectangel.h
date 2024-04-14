#ifndef RECTANGEL_H
#define RECTANGEL_H

template<typename T>
class rectangel {
private:
    T height;
    T width;

public:
    rectangel(void);
    rectangel(T w, T h);
    T get_width(void);
    T get_height(void);
    void set_width(T w);
    void set_height(T h);
    T get_area(void);
};

 

#endif // RECTANGEL_H

