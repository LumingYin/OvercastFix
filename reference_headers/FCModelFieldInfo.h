//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FCModelFieldInfo : NSObject
{
    BOOL _nullAllowed;
    int _type;
    id _defaultValue;
    Class _propertyClass;
    NSString *_propertyTypeEncoding;
}

@property(retain, nonatomic) NSString *propertyTypeEncoding; // @synthesize propertyTypeEncoding=_propertyTypeEncoding;
@property(retain, nonatomic) Class propertyClass; // @synthesize propertyClass=_propertyClass;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL nullAllowed; // @synthesize nullAllowed=_nullAllowed;
- (void).cxx_destruct;
- (id)description;

@end

