//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface XMAddressBook : NSObject
{
    _Bool hasInvited;
    NSString *name;
    NSString *tel;
    UIImage *_headerImage;
}

@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(nonatomic) _Bool hasInvited; // @synthesize hasInvited;
@property(retain, nonatomic) NSString *tel; // @synthesize tel;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)dealloc;

@end

