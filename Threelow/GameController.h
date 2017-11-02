//
//  GameController.h
//  Threelow
//
//  Created by Larry Luk on 2017-11-01.
//  Copyright © 2017 App App Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dice.h"

@interface GameController : NSObject

@property (nonatomic, strong) NSMutableArray *diceArray;
@property (nonatomic, strong) NSArray *arraySymbol;
@property (nonatomic, assign) NSInteger score;


-(void) holdDie: (NSInteger) holdDice;

-(void) displayDice;

-(void) resetDice;

-(void) currentScore;

@end
