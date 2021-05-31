import scrapy
from ..items import AmazontutorialItem

class AmazonSpiderSpider(scrapy.Spider):
    name = 'amazon_spider'
    i=0
    allowed_domains = ['amazon.com']
    start_urls = ['https://www.houseofindya.com/zyra/necklace-sets/cat']

    def parse(self, response):
        items=AmazontutorialItem()
        all_items=response.css('.catgList')

        for jewlerry in all_items:
            name_product=jewlerry.css('#JsonProductList p::text').extract()
            name_price=jewlerry.css('#JsonProductList span:nth-child(1)::text').extract()
            name_ImageLink=jewlerry.css('.lazy::attr(src)').extract()
           
            items['name_product']=name_product
            items['name_price']=name_price
            items['name_ImageLink']=name_ImageLink
            yield items 