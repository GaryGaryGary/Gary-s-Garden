//
//  Deck.h
//  StanfordCardGame
//
//  Created by Gary on 15/9/1.
//  Copyright (c) 2015年 Gary. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;//将牌加入到牌堆(是否置于牌顶)
- (void)addCard:(Card *)card;

- (Card *)drawRandowCard;//从牌堆中抽牌

@end
