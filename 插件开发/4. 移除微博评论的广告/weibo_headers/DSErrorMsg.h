//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DSErrorMsg : NSObject
{
    long long _error_index;
    NSString *_error_string;
}

@property(retain, nonatomic) NSString *error_string; // @synthesize error_string=_error_string;
@property(nonatomic) long long error_index; // @synthesize error_index=_error_index;
- (void).cxx_destruct;
- (id)getErrorMsg;

@end

