//
//  ViewController.h
//  StanfordCardGame
//
//  Created by Gary on 15/9/1.
//  Copyright (c) 2015年 Gary. All rights reserved.
//
//抽象类, 必须实现以下方法

#import <UIKit/UIKit.h>
#import "Deck.h"

@interface ViewController : UIViewController

- (Deck *)creatDeck; //抽象


@end

