//
//  PlayingCard.h
//  StanfordCardGame
//
//  Created by Gary on 15/9/1.
//  Copyright (c) 2015年 Gary. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic, strong) NSString *suit;//花色
@property (nonatomic, assign) NSUInteger rank;//点数

+ (NSArray *)validSuits;//花色数组

+ (NSUInteger)maxRank;//牌堆数量

@end
