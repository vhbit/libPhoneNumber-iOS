//
//  NBPhoneNumberDesc.h
//  libPhoneNumber
//
//  Created by NHN Corp. Last Edited by BAND dev team (band_dev@nhn.com)
//

#import <Foundation/Foundation.h>

@interface NBPhoneNumberDesc : NSObject

// from phonemetadata.pb.js
/* 2 */ @property (nonatomic, retain, readwrite) NSString *nationalNumberPattern;
/* 3 */ @property (nonatomic, retain, readwrite) NSString *possibleNumberPattern;
/* 6 */ @property (nonatomic, retain, readwrite) NSString *exampleNumber;

- (id)initWithData:(id)data;
+ (instancetype)phoneNumberDescWithData:(id)data;
@end
