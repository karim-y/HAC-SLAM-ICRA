from setuptools import setup

package_name = 'e57_pcl'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nadimdib',
    maintainer_email='ngd04@aub.edu.lb',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'reader_node = e57_pcl.reader_node:main',
            'point_counter_node = e57_pcl.point_counter_node:main',
        ],
    },
)
