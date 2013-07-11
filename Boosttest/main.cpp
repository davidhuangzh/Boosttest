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
#include <boost/progress.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/timer.hpp>

using namespace boost;
using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    timer t;
    progress_timer time;
    cout << "max timespan:"<<t.elapsed_max()/3600<<"h"<<endl;
    cout << "min timespan:"<<t.elapsed_min()<<"s"<<endl;


    
    std::cout << "Hello, World!\n";
    std::cout << "sdf";
    using boost::lexical_cast;
    int a = lexical_cast<int>("123");
    std::cout<< a << std::endl;
    return 0;
}

