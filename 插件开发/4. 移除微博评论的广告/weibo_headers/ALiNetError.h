//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ALiNetError : NSObject
{
    _Bool _isLoginCancel;
    _Bool _isAuthCancel;
    NSString *_code;
    NSString *_msg;
    NSError *_rawError;
}

@property(nonatomic) _Bool isAuthCancel; // @synthesize isAuthCancel=_isAuthCancel;
@property(nonatomic) _Bool isLoginCancel; // @synthesize isLoginCancel=_isLoginCancel;
@property(retain, nonatomic) NSError *rawError; // @synthesize rawError=_rawError;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end

