//
//  CCSprite_Penguin.h
//  PeevedPenguins
//
//  Created by Saqib Ali on 4/3/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface CCSprite ()
- (id)init {
    self = [super init];
    
    if(self) {
        CCLOG(@"Penguin created");
    }
    
    return self;
}
@end
