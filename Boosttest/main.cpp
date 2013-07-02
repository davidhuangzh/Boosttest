//
//  main.cpp
//  Boosttest
//
//  Created by luodan0318 on 13-7-2.
//  Copyright (c) 2013年 luodan0318. All rights reserved.
//

#include <iostream>
#include <boost/asio.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/lexical_cast.hpp>

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    using boost::lexical_cast;
    int a = lexical_cast<int>("123");
    std::cout<< a << std::endl;
    return 0;
}

