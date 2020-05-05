//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface ABQChoreoError : NSError
{
    long long _status;
    NSString *_choreoDescription;
}

+ (id)choreoErrorWithResponse:(id)arg1 status:(long long)arg2 sourceError:(id)arg3;
+ (id)choreoErrorWithResponse:(id)arg1 status:(long long)arg2;
@property(readonly, copy, nonatomic) NSString *choreoDescription; // @synthesize choreoDescription=_choreoDescription;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) long long choreoCode;
- (id)initWithDomain:(id)arg1 status:(long long)arg2 code:(long long)arg3 description:(id)arg4 userInfo:(id)arg5;

@end

