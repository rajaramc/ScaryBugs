//
//  SBScaryBugData.h
//  ScaryBugs
//
//  Created by Raja Ramachandran on 6/2/14.
//  Copyright (c) 2014 raja ramachandran. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SBScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle: (NSString *)title rating:(float) rating;

@end
