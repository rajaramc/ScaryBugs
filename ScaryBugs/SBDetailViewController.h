//
//  SBDetailViewController.h
//  ScaryBugs
//
//  Created by Raja Ramachandran on 6/2/14.
//  Copyright (c) 2014 raja ramachandran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
