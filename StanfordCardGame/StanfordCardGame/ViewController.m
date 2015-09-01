//
//  ViewController.m
//  StanfordCardGame
//
//  Created by Gary on 15/9/1.
//  Copyright (c) 2015年 Gary. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UILabel *flipsLabel;
@property (nonatomic, assign) int flipCount;

@end

@implementation ViewController

- (void)setFlipCount:(int)flipCount
{
    _flipCount = flipCount;
    self.flipsLabel.text = [NSString stringWithFormat:@"flipCount %d",self.flipCount];
}

- (IBAction)touchCardButton:(UIButton *)sender
{
    if (![sender.currentTitle length]) {
        [sender setBackgroundImage:[UIImage imageNamed:@"Card"] forState:UIControlStateNormal];
        [sender setTitle:@"A" forState:UIControlStateNormal];
    } else
    {
        [sender setBackgroundImage:[UIImage imageNamed:@"CardBackground"] forState:UIControlStateNormal];
        [sender setTitle:@"" forState:UIControlStateNormal];
    }
    self.flipCount++;
}









@end
