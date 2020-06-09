//
//  counter.hpp
//  LightGC
//
//  Created by Shota Shimazu on 2020/06/09.
//  Copyright © 2020 Shota Shimazu. All rights reserved.
//

#ifndef counter_hpp
#define counter_hpp

#include <stdio.h>

class RefCounter
{
private:
    RefCounter();
public:
    int refCount;
};

#endif /* counter_hpp */
