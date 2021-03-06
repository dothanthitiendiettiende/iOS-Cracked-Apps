//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface CommonPassengerSavRetRequest : CTBusinessBean
{
    int serviceVersion;
    int isDelete;
    int id;
    NSString *passengerType;
    NSString *nameCN;
    NSString *eNFirstName;
    NSString *eNMiddleName;
    NSString *eNLastName;
    NSString *birthday;
    int gender;
    NSString *nationality;
    NSString *mobilePhone;
    NSString *contactTel;
    NSString *contactEmail;
    NSString *mobilePhoneHK;
    NSString *mobilePhoneForeign;
    NSString *birthPlace;
    NSString *thirdPartyType;
    NSString *bankName;
    NSString *hasOrder;
    NSMutableArray *parameterPairList;
    NSMutableArray *memberUserIDCardInfoSavRetList;
    NSMutableArray *memberUserFFPInfoSavRetList;
    NSString *countryCode;
    NSString *countryCodeForeign;
}

@property(copy, nonatomic) NSString *countryCodeForeign; // @synthesize countryCodeForeign;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(retain, nonatomic) NSMutableArray *memberUserFFPInfoSavRetList; // @synthesize memberUserFFPInfoSavRetList;
@property(retain, nonatomic) NSMutableArray *memberUserIDCardInfoSavRetList; // @synthesize memberUserIDCardInfoSavRetList;
@property(retain, nonatomic) NSMutableArray *parameterPairList; // @synthesize parameterPairList;
@property(copy, nonatomic) NSString *hasOrder; // @synthesize hasOrder;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName;
@property(copy, nonatomic) NSString *thirdPartyType; // @synthesize thirdPartyType;
@property(copy, nonatomic) NSString *birthPlace; // @synthesize birthPlace;
@property(copy, nonatomic) NSString *mobilePhoneForeign; // @synthesize mobilePhoneForeign;
@property(copy, nonatomic) NSString *mobilePhoneHK; // @synthesize mobilePhoneHK;
@property(copy, nonatomic) NSString *contactEmail; // @synthesize contactEmail;
@property(copy, nonatomic) NSString *contactTel; // @synthesize contactTel;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone;
@property(copy, nonatomic) NSString *nationality; // @synthesize nationality;
@property(nonatomic) int gender; // @synthesize gender;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday;
@property(copy, nonatomic) NSString *eNLastName; // @synthesize eNLastName;
@property(copy, nonatomic) NSString *eNMiddleName; // @synthesize eNMiddleName;
@property(copy, nonatomic) NSString *eNFirstName; // @synthesize eNFirstName;
@property(copy, nonatomic) NSString *nameCN; // @synthesize nameCN;
@property(copy, nonatomic) NSString *passengerType; // @synthesize passengerType;
@property(nonatomic) int id; // @synthesize id;
@property(nonatomic) int isDelete; // @synthesize isDelete;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

