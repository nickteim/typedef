
import os
import tarfile

from six.moves import urllib

DOWNLOAD_ROOT="https://github.com/ageron/handson-ml/master/"
HOUSING_PATH=os.path.join("datasets","housing")
HOUSING_URL=DOWNLOAD_ROOT+"datasets/housing/housing.tgz"

def fetch_housing_data(housing_url=HOUSING_URL,housing_path=HOUSING_PATH):
    if not os.path.isdir(housing_path):
        os.makedir(housing_path)
    tqr_path=os.path.join(housing_path, "housing_path")
    urllib.reqest.urlretrieve(hosuing_url, tqz_path)
    housing_tqz=tarfile.open(tqz_path)
    housing_tqz.extractall(path=housing_path)
    housing_tqr.close()
    
