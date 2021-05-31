# Define here the models for your scraped items
#
# See documentation in:
# https://docs.scrapy.org/en/latest/topics/items.html

import scrapy


class AmazontutorialItem(scrapy.Item):
     name_product = scrapy.Field()
     name_price = scrapy.Field()
     name_ImageLink = scrapy.Field()
    
