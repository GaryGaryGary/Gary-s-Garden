//
//  Card.h
//  StanfordCardGame
//
//  Created by Gary on 15/9/1.
//  Copyright (c) 2015年 Gary. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (nonatomic, strong) NSString *contents;//纸牌内容

@property (nonatomic, assign) BOOL chosen;

@property (nonatomic, assign) BOOL matched;

- (int)match:(NSArray *)otherCards;//匹配规则

@end
