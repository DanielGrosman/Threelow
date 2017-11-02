//
//  Dice.m
//  Threelow
//
//  Created by Larry Luk on 2017-11-01.
//  Copyright © 2017 App App Studio. All rights reserved.
//

#import "Dice.h"

@implementation Dice

// initializes the Dice with a default value of NO for the BOOL held
- (instancetype)init
{
    self = [super init];
    if (self) {
        _held = NO;
    }
    return self;
}

// when called, this method assigns a random value to the dice if the BOOL held is NO (this way, if they hold dice and roll again, the held dice won't roll)
-(int) randomValue {
    
    if (self.held == NO){
    self.diceValue = arc4random_uniform(6) + 1;
        
    }
    return self.diceValue;

}



@end
