//
//  CCSprite+Seal.h
//  PeevedPenguins
//
//  Created by Saqib Ali on 4/4/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface CCSprite (Seal)
- (id)init {
    self = [super init];
    
    if (self) {
        CCLOG(@"Seal created");
    }
    
    return self;
}
@end
