//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMAUCWebViewInsertParam : NSObject
{
    _Bool _hide;
    NSString *_slaveId;
    NSString *_viewId;
    NSString *_parentId;
    NSString *_src;
}

@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
- (void).cxx_destruct;

@end

