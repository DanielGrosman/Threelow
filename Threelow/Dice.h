//
//  Dice.h
//  Threelow
//
//  Created by Larry Luk on 2017-11-01.
//  Copyright © 2017 App App Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dice : NSObject

@property (nonatomic, assign) int diceValue;
@property (nonatomic, assign) BOOL held;

-(int) randomValue;



@end
