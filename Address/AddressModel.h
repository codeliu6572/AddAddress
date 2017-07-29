//
//  AdressModel.h
//  Shihanbainian
//
//  Created by apple on 2017/7/10.
//  Copyright © 2017年 Codeliu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddressModel : NSObject
@property(nonatomic,strong)NSString *sh_address;
@property(nonatomic,strong)NSString *sh_full_name;
@property(nonatomic,strong)NSString *sh_area;
@property(nonatomic,strong)NSString *sh_area_id;
@property(nonatomic,strong)NSString *sh_city;
@property(nonatomic,strong)NSString *sh_city_id;
@property(nonatomic,strong)NSString *sh_id;
@property(nonatomic,strong)NSString *sh_is_default;
@property(nonatomic,strong)NSString *sh_mobile;
@property(nonatomic,strong)NSString *sh_province;
@property(nonatomic,strong)NSString *sh_province_id;

@end
