//
//  SBScaryBugData.m
//  ScaryBugs
//
//  Created by Raja Ramachandran on 6/2/14.
//  Copyright (c) 2014 raja ramachandran. All rights reserved.
//

#import "SBScaryBugData.h"

@implementation SBScaryBugData

@synthesize title = _title;
@synthesize rating=_rating;

- (id)initWithTitle: (NSString*) title rating: (float)rating {
    if( self = [super init]) {
        self.title=title;
        self.rating=rating;
        
    }
    return self;
}

@end
