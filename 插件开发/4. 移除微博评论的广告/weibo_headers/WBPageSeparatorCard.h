//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString;

@interface WBPageSeparatorCard : WBPageCard
{
    NSString *_name;
    NSString *_cardBackColor;
    NSString *_pic_tag_style;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(copy, nonatomic) NSString *pic_tag_style; // @synthesize pic_tag_style=_pic_tag_style;
@property(copy, nonatomic) NSString *cardBackColor; // @synthesize cardBackColor=_cardBackColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

