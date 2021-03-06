//
//  OCMockito - MKTShortArgumentGetter.h
//  Copyright 2014 Jonathan M. Reid. See LICENSE.txt
//
//  Created by: Jon Reid, http://qualitycoding.org/
//  Source: https://github.com/jonreid/OCMockito
//

#import "MKTArgumentGetter.h"


@interface MKTShortArgumentGetter : MKTArgumentGetter

- (instancetype)initWithSuccessor:(MKTArgumentGetter *)successor;

@end
